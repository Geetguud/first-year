#include <stdio.h>

struct Unit {
    char name[30];
    int maxhp,
        hp,
        atk,
        init_atk;
} hero[111], monster;

struct CD {
    int monster_oneshot,
        heal,
        super_attack,
        super_stack,
        reduce_attack,
        reduce_stack;
} cooldown;

int damage(int current, struct Unit hero[], int n);
void hero_special(int current, struct Unit hero[], struct Unit *monster, struct CD *cooldown, int n);
void monster_special(int current, struct Unit hero[], struct Unit *monster, struct CD *cooldown, int n);

int main() {
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d\n", hero[i].name, &hero[i].maxhp, &hero[i].atk);
        hero[i].hp = hero[i].maxhp;
    }
    scanf("Monster : %d %d", &monster.hp, &monster.atk);
    monster.init_atk = monster.atk;

    cooldown.monster_oneshot = 4;
    cooldown.heal = 2;
    cooldown.super_attack = 3;
    cooldown.super_stack = 0;
    cooldown.reduce_attack = 5;
    cooldown.reduce_stack = 0;

    int current = 0;
    while (monster.hp > 0 && current < n) {
        while (hero[current].hp <= 0) {
            current++;
            if (current >= n) break;
        }
        if (current >= n) break;

        hero_special(current, hero, &monster, &cooldown, n);

        if (cooldown.super_stack) cooldown.super_stack = 0;
        else monster.hp -= damage(current, hero, n);

        if (monster.hp <= 0) break;

        monster_special(current, hero, &monster, &cooldown, n);
    }

    printf("Status Tim :\n");
    for (int i = 0; i < n; i++) {
        if (hero[i].hp > 0) printf("Health Hero %s tersisa %d\n", hero[i].name, hero[i].hp);
        else printf("Hero %s Sekarat!\n", hero[i].name);
    }
    printf("\n");

    printf("Status Musuh :\n");
    if (monster.hp > 0) printf("Gawat!!! Monster masih tidak terkalahkan...");
    else printf("Monster berhasil dikalahkan!");

    return 0;
}

int damage(int current, struct Unit hero[], int n) {
    int total = 0;
    for (int i = current; i < n; i++) {
        if (hero[i].hp > 0) total += hero[i].atk;
    }
    return total;
}

void hero_special(int current, struct Unit hero[], struct Unit *monster, struct CD *cooldown, int n) {
    if (cooldown-> heal == 0) {
        int heal = hero[current].maxhp / 10;
        if ((hero[current].hp + heal) > hero[current].maxhp) hero[current].hp = hero[current].maxhp;
        else hero[current].hp += hero[current].maxhp / 10;
        cooldown-> heal = 3;
    } else cooldown-> heal--;

    if (cooldown-> super_attack == 0) {
        monster-> hp -= (damage(current, hero, n) * 2);
        cooldown-> super_attack = 4;
        cooldown-> super_stack = 1;
    } else cooldown-> super_attack--;

    if (cooldown-> reduce_attack == 0 && cooldown-> reduce_stack < 10) {
        monster-> atk -= (monster-> init_atk / 20);
        cooldown-> reduce_attack = 6;
        cooldown-> reduce_stack++;
    } else cooldown-> reduce_attack--;
}

void monster_special(int current, struct Unit hero[], struct Unit *monster, struct CD *cooldown, int n) {
    if (cooldown-> monster_oneshot == 0) {
        int lowhp = hero[current].hp;
        int lowhero = current;
        for (int i = current; i < n; i++) {
            if (hero[i].hp < lowhp) {
                lowhp = hero[i].hp;
                lowhero = i;
            }
        }

        hero[lowhero].hp = -1;
        cooldown-> monster_oneshot = 5;
    } else {
        hero[current].hp -= monster-> atk;
        cooldown-> monster_oneshot--;
    }
}