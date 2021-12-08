/*
	Tanggal:
		Pembuatan: 4 Desember 2021
		Modifikasi 1: 6 Desember 2021
		Modifikasi 2: 7 Desember 2021
		Modifikasi 3: 8 Desember 2021
*/

/* PROBLEM */
/*
    You are head of maintenance scheduling for Brown Bag Airlines. You have three crews,
	with different qualifications. You need to schedule a list of aircraft maintenance jobs.
	Build a small library of functions useful for solving constrained scheduling problems.
	Develop one algorithm to find the quickest way to get the maintenance done and another
	to find the cheapest way to get the work done.
*/

/* ANALYSIS */
/*
	The scheduling process has two phases, finding a job to be prioritized and assigning a
	suitable crew.
	
	In case of cheapest way of scheduling jobs, we don't really need to prioritize any of them.
	As for the quickest way, we shall prioritize the job with most number of hours needed to
	complete it, then the highest level of maintenance.
	
	Finding a suitable crew for the cheapest way is simply to get a crew with sufficient skill
	level and the lowest cost per hour. For the quickest way, a crew with enough skill level
	and least workload shall be prioritized to get the job, and if there are more than one that
	is available, one with the lowest cost per hour will be assigned.
*/

/* DESIGN */
/*
	INITIAL ALGORITHM
	1. Get crew database and aircraft maintenance database
	2. Schedule the quickest way and cheapest way
	3. Display the results
*/

/* IMPLEMENTATION */
/*
	Function scan_crew and scan_aircraft takes an input of database filename from user,
	then scan the file. Accepted format of database is .txt and .bin file.

	Function check_cheapest finds a suitable crew for the cheapest way of scheduling,
	and returns the crew index number. Similarly, function check_earliest finds a suitable
	crew for the quickest way of scheduling.

	Function assign allocates a job into the schedule and accumulates the assigned crew's
	workhour.

	Function find_priority finds a job to be prioritized. This function is only used in the
	quickest way of scheduling. The rank of priority is: highest number of hours needed,
	then the highest level of maintenance.

	Function scheduling loops through all the maintenance jobs, and puts each of them into the
	workload of a suitable crew.
*/

#define STR_SIZ 100 /* maximum length for strings */
#define ARR_SIZ 99 /* maximum size of arrays */

typedef struct {
    int number, level; /* crew number and skill level */
    double cost; /* crew cost per hour */
	int tasks_fast, /* number of job assigned (fastest schedule) */
		total_workhour_fast; /* total hour of work assigned (fastest schedule) */
	int tasks_lowcost, /* number of job assigned (cheapest schedule) */
		total_workhour_lowcost; /* total hour of work assigned (cheapest schedule) */
} crew_t;  /* structure variable for crews */

typedef struct {
    int id, /* aircraft ID */
		level, /* aircraft level of maintenance */
		hours, /* number of hours needed for maintenance */
		done; /* maintenance job state of 'have been scheduled' (used only in fastest schedule) */
} aircraft_t; /* structure variable for aircraft maintenance jobs */

int scan_crew(crew_t crew[], int *crew_quantity);
int scan_aircraft(aircraft_t aircraft[], int *aircraft_quantity);
int check_cheapest(crew_t crew[], aircraft_t aircraft, int crew_quantity);
int check_earliest(crew_t crew[], aircraft_t aircraft, int crew_quantity);
void assign(crew_t *crew, aircraft_t aircraft, int *schedule, char *type);
int find_priority(aircraft_t aircraft[], int aircraft_quantity);
int scheduling(aircraft_t aircraft[], crew_t crew[], int aircraft_quantity, int crew_quantity, int schedule[ARR_SIZ][ARR_SIZ], int *time, double *cost, char *type);