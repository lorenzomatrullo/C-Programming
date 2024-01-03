#include <stdio.h>

#define MONTHS 12
#define DAYS 30
#define HOURS 24
#define CATEGORIES 3

struct Appointment {
    int category;
};

void addAppointment(struct Appointment agenda[MONTHS][DAYS][HOURS]);
void calculateCategoryHours(struct Appointment agenda[MONTHS][DAYS][HOURS]);
void describeStatistics(struct Appointment agenda[MONTHS][DAYS][HOURS]);
void performAgendaOperations(struct Appointment agenda[MONTHS][DAYS][HOURS]);

const char *categoryNames[CATEGORIES] = {"Work", "Home", "Sport"};

int main() {
    struct Appointment agenda[MONTHS][DAYS][HOURS] = {{{0}}};
    performAgendaOperations(agenda);
    return 0;
}

void addAppointment(struct Appointment agenda[MONTHS][DAYS][HOURS]) {
    int month, day, hour, category;
    
    printf("\nEnter the month (1 to 12): ");
    scanf("%d", &month);

    printf("Enter the day (1 to 30): ");
    scanf("%d", &day);

    printf("Enter the hour (0 to 23): ");
    scanf("%d", &hour);

    printf("Select the category (1 = work, 2 = home, 3 = sport): ");
    scanf("%d", &category);

    agenda[month - 1][day - 1][hour].category = category;
}

void calculateCategoryHours(struct Appointment agenda[MONTHS][DAYS][HOURS]) {

    int category, month1, day1, month2, day2;
    printf("Enter the category (1 = work, 2 = home, 3 = sport): ");
    scanf("%d", &category);

    printf("Enter the start date (month day): ");
    scanf("%d %d", &month1, &day1);

    printf("Enter the end date (month day): ");
    scanf("%d %d", &month2, &day2);

    int hoursDedicated = 0;
    int startMonth = month1 - 1;
    int startDay = day1 - 1;
    int endMonth = month2 - 1;

    for (int month = startMonth; month < endMonth; month++) {
        int startDayOfMonth = startDay;
        if (month != startMonth) {
            startDayOfMonth = 0;
        }

        int endDay = DAYS;
        if (month == endMonth) {
            endDay = day2;
        }

        for (int day = startDayOfMonth; day < endDay; day++) {
            for (int hour = 0; hour < HOURS; hour++) {
                int currentCategory = agenda[month][day][hour].category;
                if (currentCategory == category) {
                    hoursDedicated++;
                }
            }
        }
    }

    printf("Total hours dedicated to %s: %d\n", categoryNames[category - 1], hoursDedicated);
}

void describeStatistics(struct Appointment agenda[MONTHS][DAYS][HOURS]) {

    int hoursPerCategory[CATEGORIES] = {0};

    for (int month = 0; month < MONTHS; month++) {
        for (int day = 0; day < DAYS; day++) {
            for (int hour = 0; hour < HOURS; hour++) {
                int currentCategory = agenda[month][day][hour].category;
                hoursPerCategory[currentCategory - 1]++;
            }
        }
    }

    printf("\nStatistics of hours dedicated to each category:\n");
    printf("%s: %d hours\n", categoryNames[0], hoursPerCategory[0]);
    printf("%s: %d hours\n", categoryNames[1], hoursPerCategory[1]);
    printf("%s: %d hours\n", categoryNames[2], hoursPerCategory[2]);
}

void performAgendaOperations(struct Appointment agenda[MONTHS][DAYS][HOURS]) {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add an appointment\n");
        printf("2. Show hours dedicated to a category within a date range\n");
        printf("3. Describe statistics of hours dedicated to each category\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addAppointment(agenda);
                break;
            case 2:
                calculateCategoryHours(agenda);
                break;
            case 3:
                describeStatistics(agenda);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
}