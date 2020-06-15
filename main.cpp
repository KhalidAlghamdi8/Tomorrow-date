//
//  main.cpp
//  Tomorrow date
//
//  Created by Khalid  on 9/13/17.
//  Copyright © 2017 Khalid Alghamdi. All rights reserved.
//

#include <iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
}*dates;

int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

void nextDate(int &d, int &m, int &y);


int main()
{
    int n;
    int counter=0;
    
    cout << "Enter amount of dates to be stored: ";
    cin >> n;
    dates = new Date[n];
    
    for(int i=0; i<n; i++)
    {
        
        cout << "Enter day " << (i+1) << ": ";
        cin >> dates[i].day;
        
        cout << "Enter month " << (i+1) << ": ";
        cin >> dates[i].month;
        
        cout << "Enter year " << (i+1) << ": ";
        cin >> dates[i].year;
        
        cout << "\n";
    }
    
    
    //printDates(n);
    cout << "\n\n";
    
    for(int i=0; i<n; i++){
        cout << "Date: "<<dates[i].day << "/" << dates[i].month << "/" << dates[i].year << endl;
        nextDate(dates[i].day, dates[i].month, dates[i].year);
        cout << "Next Date: "<<dates[i].day << "/" << dates[i].month << "/" << dates[i].year << endl;
        cout << "\n";
    }
    
    
    // count months that have 30 days
    
    for(int i=0; i<n; i++){
        
        if(days[dates[i].month-1] == 30){
            counter++;
        }
    }
    cout << "\n Number of months that have only 30 days is: " << counter << endl;
    
    
    return 0;
}


void nextDate(int &d, int &m, int &y)
{
    d+=1;
    if ( d > days[m-1])
    {
        d=1;
        m++;
        if ( m > 12 )
        {
            y++;
            m=1;
        }
    }
    
}
