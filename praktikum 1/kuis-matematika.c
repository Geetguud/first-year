#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    long int y = a % c;
    long int z = (y*y*y*y*y) % c;
    long int w = (z*z*z*z*z) % c;
    long int v = (w*w*w*w*w) % c;

    long int x;

    if(b==0){x=1%c;}
    else if(b==1){x=y;}
    else if(b==2){x=y*y;}
    else if(b==3){x=y*y*y;}
    else if(b==4){x=y*y*y*y;}
    else if(b==5){x=z;}
    else if(b==6){x=z*y;}
    else if(b==7){x=z*y*y;}
    else if(b==8){x=z*y*y*y;}
    else if(b==9){x=z*y*y*y*y;}
    else if(b==10){x=z*z;}
    else if(b==11){x=z*z*y;}
    else if(b==12){x=z*z*y*y;}
    else if(b==13){x=z*z*y*y*y;}
    else if(b==14){x=z*z*y*y*y*y;}
    else if(b==15){x=z*z*z;}
    else if(b==16){x=z*z*z*y;}
    else if(b==17){x=z*z*z*y*y;}
    else if(b==18){x=z*z*z*y*y*y;}
    else if(b==19){x=z*z*z*y*y*y*y;}
    else if(b==20){x=z*z*z*z;}
    else if(b==21){x=z*z*z*z*y;}
    else if(b==22){x=z*z*z*z*y*y;}
    else if(b==23){x=z*z*z*z*y*y*y;}
    else if(b==24){x=z*z*z*z*y*y*y*y;}
    else if(b==25){x=w;}
    else if(b==26){x=w*y;}
    else if(b==27){x=w*y*y;}
    else if(b==28){x=w*y*y*y;}
    else if(b==29){x=w*y*y*y*y;}
    else if(b==30){x=w*z;}
    else if(b==31){x=w*z*y;}
    else if(b==32){x=w*z*y*y;}
    else if(b==33){x=w*z*y*y*y;}
    else if(b==34){x=w*z*y*y*y*y;}
    else if(b==35){x=w*z*z;}
    else if(b==36){x=w*z*z*y;}
    else if(b==37){x=w*z*z*y*y;}
    else if(b==38){x=w*z*z*y*y*y;}
    else if(b==39){x=w*z*z*y*y*y*y;}
    else if(b==40){x=w*z*z*z;}
    else if(b==41){x=w*z*z*z*y;}
    else if(b==42){x=w*z*z*z*y*y;}
    else if(b==43){x=w*z*z*z*y*y*y;}
    else if(b==44){x=w*z*z*z*y*y*y*y;}
    else if(b==45){x=w*z*z*z*z;}
    else if(b==46){x=w*z*z*z*z*y;}
    else if(b==47){x=w*z*z*z*z*y*y;}
    else if(b==48){x=w*z*z*z*z*y*y*y;}
    else if(b==49){x=w*z*z*z*z*y*y*y*y;}
    else if(b==50){x=w*w;}
    else if(b==51){x=w*w*y;}
    else if(b==52){x=w*w*y*y;}
    else if(b==53){x=w*w*y*y*y;}
    else if(b==54){x=w*w*y*y*y*y;}
    else if(b==55){x=w*w*z;}
    else if(b==56){x=w*w*z*y;}
    else if(b==57){x=w*w*z*y*y;}
    else if(b==58){x=w*w*z*y*y*y;}
    else if(b==59){x=w*w*z*y*y*y*y;}
    else if(b==60){x=w*w*z*z;}
    else if(b==61){x=w*w*z*z*y;}
    else if(b==62){x=w*w*z*z*y*y;}
    else if(b==63){x=w*w*z*z*y*y*y;}
    else if(b==64){x=w*w*z*z*y*y*y*y;}
    else if(b==65){x=w*w*z*z*z;}
    else if(b==66){x=w*w*z*z*z*y;}
    else if(b==67){x=w*w*z*z*z*y*y;}
    else if(b==68){x=w*w*z*z*z*y*y*y;}
    else if(b==69){x=w*w*z*z*z*y*y*y*y;}
    else if(b==70){x=w*w*z*z*z*z;}
    else if(b==71){x=w*w*z*z*z*z*y;}
    else if(b==72){x=w*w*z*z*z*z*y*y;}
    else if(b==73){x=w*w*z*z*z*z*y*y*y;}
    else if(b==74){x=w*w*z*z*z*z*y*y*y*y;}
    else if(b==75){x=w*w*w;}
    else if(b==76){x=w*w*w*y;}
    else if(b==77){x=w*w*w*y*y;}
    else if(b==78){x=w*w*w*y*y*y;}
    else if(b==79){x=w*w*w*y*y*y*y;}
    else if(b==80){x=w*w*w*z;}
    else if(b==81){x=w*w*w*z*y;}
    else if(b==82){x=w*w*w*z*y*y;}
    else if(b==83){x=w*w*w*z*y*y*y;}
    else if(b==84){x=w*w*w*z*y*y*y*y;}
    else if(b==85){x=w*w*w*z*z;}
    else if(b==86){x=w*w*w*z*z*y;}
    else if(b==87){x=w*w*w*z*z*y*y;}
    else if(b==88){x=w*w*w*z*z*y*y*y;}
    else if(b==89){x=w*w*w*z*z*y*y*y*y;}
    else if(b==90){x=w*w*w*z*z*z;}
    else if(b==91){x=w*w*w*z*z*z*y;}
    else if(b==92){x=w*w*w*z*z*z*y*y;}
    else if(b==93){x=w*w*w*z*z*z*y*y*y;}
    else if(b==94){x=w*w*w*z*z*z*y*y*y*y;}
    else if(b==95){x=w*w*w*z*z*z*z;}
    else if(b==96){x=w*w*w*z*z*z*z*y;}
    else if(b==97){x=w*w*w*z*z*z*z*y*y;}
    else if(b==98){x=w*w*w*z*z*z*z*y*y*y;}
    else if(b==99){x=w*w*w*z*z*z*z*y*y*y*y;}
    else if(b==100){x=w*w*w*w;}
    else if(b==101){x=w*w*w*w*y;}
    else if(b==102){x=w*w*w*w*y*y;}
    else if(b==103){x=w*w*w*w*y*y*y;}
    else if(b==104){x=w*w*w*w*y*y*y*y;}
    else if(b==105){x=w*w*w*w*z;}
    else if(b==106){x=w*w*w*w*z*y;}
    else if(b==107){x=w*w*w*w*z*y*y;}
    else if(b==108){x=w*w*w*w*z*y*y*y;}
    else if(b==109){x=w*w*w*w*z*y*y*y*y;}
    else if(b==110){x=w*w*w*w*z*z;}
    else if(b==111){x=w*w*w*w*z*z*y;}
    else if(b==112){x=w*w*w*w*z*z*y*y;}
    else if(b==113){x=w*w*w*w*z*z*y*y*y;}
    else if(b==114){x=w*w*w*w*z*z*y*y*y*y;}
    else if(b==115){x=w*w*w*w*z*z*z;}
    else if(b==116){x=w*w*w*w*z*z*z*y;}
    else if(b==117){x=w*w*w*w*z*z*z*y*y;}
    else if(b==118){x=w*w*w*w*z*z*z*y*y*y;}
    else if(b==119){x=w*w*w*w*z*z*z*y*y*y*y;}
    else if(b==120){x=w*w*w*w*z*z*z*z;}
    else if(b==121){x=w*w*w*w*z*z*z*z*y;}
    else if(b==122){x=w*w*w*w*z*z*z*z*y*y;}
    else if(b==123){x=w*w*w*w*z*z*z*z*y*y*y;}
    else if(b==124){x=w*w*w*w*z*z*z*z*y*y*y*y;}
    else if(b==125){x=v;}
    else if(b==126){x=v*y;}
    else if(b==127){x=v*y*y;}
    else if(b==128){x=v*y*y*y;}
    else if(b==129){x=v*y*y*y*y;}
    else if(b==130){x=v*z;}
    else if(b==131){x=v*z*y;}
    else if(b==132){x=v*z*y*y;}
    else if(b==133){x=v*z*y*y*y;}
    else if(b==134){x=v*z*y*y*y*y;}
    else if(b==135){x=v*z*z;}
    else if(b==136){x=v*z*z*y;}
    else if(b==137){x=v*z*z*y*y;}
    else if(b==138){x=v*z*z*y*y*y;}
    else if(b==139){x=v*z*z*y*y*y*y;}
    else if(b==140){x=v*z*z*z;}
    else if(b==141){x=v*z*z*z*y;}
    else if(b==142){x=v*z*z*z*y*y;}
    else if(b==143){x=v*z*z*z*y*y*y;}
    else if(b==144){x=v*z*z*z*y*y*y*y;}
    else if(b==145){x=v*z*z*z*z;}
    else if(b==146){x=v*z*z*z*z*y;}
    else if(b==147){x=v*z*z*z*z*y*y;}
    else if(b==148){x=v*z*z*z*z*y*y*y;}
    else if(b==149){x=v*z*z*z*z*y*y*y*y;}
    else if(b==150){x=v*w;}
    else if(b==151){x=v*w*y;}
    else if(b==152){x=v*w*y*y;}
    else if(b==153){x=v*w*y*y*y;}
    else if(b==154){x=v*w*y*y*y*y;}
    else if(b==155){x=v*w*z;}
    else if(b==156){x=v*w*z*y;}
    else if(b==157){x=v*w*z*y*y;}
    else if(b==158){x=v*w*z*y*y*y;}
    else if(b==159){x=v*w*z*y*y*y*y;}
    else if(b==160){x=v*w*z*z;}
    else if(b==161){x=v*w*z*z*y;}
    else if(b==162){x=v*w*z*z*y*y;}
    else if(b==163){x=v*w*z*z*y*y*y;}
    else if(b==164){x=v*w*z*z*y*y*y*y;}
    else if(b==165){x=v*w*z*z*z;}
    else if(b==166){x=v*w*z*z*z*y;}
    else if(b==167){x=v*w*z*z*z*y*y;}
    else if(b==168){x=v*w*z*z*z*y*y*y;}
    else if(b==169){x=v*w*z*z*z*y*y*y*y;}
    else if(b==170){x=v*w*z*z*z*z;}
    else if(b==171){x=v*w*z*z*z*z*y;}
    else if(b==172){x=v*w*z*z*z*z*y*y;}
    else if(b==173){x=v*w*z*z*z*z*y*y*y;}
    else if(b==174){x=v*w*z*z*z*z*y*y*y*y;}
    else if(b==175){x=v*w*w;}
    else if(b==176){x=v*w*w*y;}
    else if(b==177){x=v*w*w*y*y;}
    else if(b==178){x=v*w*w*y*y*y;}
    else if(b==179){x=v*w*w*y*y*y*y;}
    else if(b==180){x=v*w*w*z;}
    else if(b==181){x=v*w*w*z*y;}
    else if(b==182){x=v*w*w*z*y*y;}
    else if(b==183){x=v*w*w*z*y*y*y;}
    else if(b==184){x=v*w*w*z*y*y*y*y;}
    else if(b==185){x=v*w*w*z*z;}
    else if(b==186){x=v*w*w*z*z*y;}
    else if(b==187){x=v*w*w*z*z*y*y;}
    else if(b==188){x=v*w*w*z*z*y*y*y;}
    else if(b==189){x=v*w*w*z*z*y*y*y*y;}
    else if(b==190){x=v*w*w*z*z*z;}
    else if(b==191){x=v*w*w*z*z*z*y;}
    else if(b==192){x=v*w*w*z*z*z*y*y;}
    else if(b==193){x=v*w*w*z*z*z*y*y*y;}
    else if(b==194){x=v*w*w*z*z*z*y*y*y*y;}
    else if(b==195){x=v*w*w*z*z*z*z;}
    else if(b==196){x=v*w*w*z*z*z*z*y;}
    else if(b==197){x=v*w*w*z*z*z*z*y*y;}
    else if(b==198){x=v*w*w*z*z*z*z*y*y*y;}
    else if(b==199){x=v*w*w*z*z*z*z*y*y*y*y;}
    else if(b==200){x=v*w*w*w;}
    
    long double vwxyz = x % c;

    long double result = vwxyz / d;

    printf("%.2Lf\n", result);

    return 0;
}