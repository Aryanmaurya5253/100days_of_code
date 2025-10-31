/*
Q99 (Strings)
Change date format from dd/mm/yyyy to dd-Apr-yyyy.

Input:
25/04/2025

Output:
25-Apr-2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char date[20];      // to store input date
    char day[3], month[3], year[5];  // to store day, month, year
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    // Step 1: Take date input
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Step 2: Extract day, month, year
    strncpy(day, date, 2); 
    day[2] = '\0';

    strncpy(month, date+3, 2); 
    month[2] = '\0';

    strcpy(year, date+6);

    // Step 3: Convert month number to abbreviation
    int m = atoi(month);  // convert month string to integer (04 -> 4)
    char *monthName = months[m - 1];  // get month abbreviation from array

    // Step 4: Print formatted date
    printf("%s-%s-%s\n", day, monthName, year);

    return 0;
}

/*
Explanation:
1. Take input date as a string in dd/mm/yyyy format.
2. Extract day, month, and year using strncpy and strcpy.
3. Convert month string to integer using atoi.
4. Use an array of month names to get the abbreviation.
5. Print the date in dd-MMM-yyyy format.

Example:
Input: 25/04/2025
Output: 25-Apr-2025
*/
