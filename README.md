# Tomorrow-date



Pseudocode:

struct Date
{
    int day;
    int month;
    int year;
}*dates;

int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

// pass struct args by reference

void nextDate(int &d, int &m, int &y)
{
    d = d + 1;
    IF ( d > days[m-1])
    
        d = 1;
        m = m + 1;
        IF( m > 12 )
        
            y = y +1;
            m = 1;
        END IF
    END IF

}
 
// main menu
BEGIN

    int n;
    int counter = 0;

    PRINT "Enter amount of dates to be stored: ";
    READ n;
    dates = new Date[n];

    FOR(int i=0; i<n; i++)
    

        PRINT  "Enter day "   + (i+1) +  ": ";
        READ >> dates[i].day;

        PRINT  "Enter month " + (i+1) + ": ";
        READ >> dates[i].month;

        PRINT  "Enter year " + (i+1) + ": ";
        READ  dates[i].year;

        PRINT  "\n";
    END FOR


    PRINT "\n\n";

    FOR(int i=0; i<n; i++)
	   //print dates before updating
       PRINT "Date: " + dates[i].day + "/" + dates[i].month + "/" + dates[i].year + "\n";
       nextDate(dates[i].day, dates[i].month, dates[i].year);
	   // after updating dates
       PRINT "Date: " + dates[i].day + "/" + dates[i].month + "/" + dates[i].year + "\n";
       PRINT "\n";
    END FOR


    // count months that have 30 days

    FOR(int i=0; i<n; i++)

        IF(days[dates[i].month-1] == 30)
            counter = counter + 1;
        END IF
    END FOR
    
	PRINT "\n Number of months that have only 30 days is: " + counter + "\n";



END




