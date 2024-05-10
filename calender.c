#include <stdio.h>

#define TRUE 1
#define FALSE 0

int days_in_month[] ={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char *months[]={

  ""
  "\n\n\n January"
  "\n\n\n Feburary"
  "\n\n\n March "
  "\n\n\n April"
  "\n\n\n May"
  "\n\n\n June"
  "\n\n\n July"
  "\n\n\n August"
  "\n\n\n September"
  "\n\n\n October"
  "\n\n\n November"
  "\n\n\n December"
};

int inputyear(void){


  int year ;
  printf ("Please enter a year (contoh : 1999)");
  scanf ("%d", &year);

  return year; 
}

int determineleapyear (int year){

  if (year % 4 == FALSE && year % 100 != FALSE || year % 400 == FALSE ){

    days_in_month [2] = 29 ;
    return TRUE ; 
  } else {
    days_in_month[2] = 28;
    return FALSE ;
  }
}

int determinatedaycode (int year ){

  int daycode;
  int d1, d2, d3;


  d1 = ( year - 1)/4.0;
  d2 = (year -1) / 100 ; 
  d3 = (year - 1) / 400;
  daycode = (year + d1 + d2 + d3 ) % 7 ;

  return daycode;
}

void calender (int year, int daycode){
  for (month = 1; moth <= 12; month ++){
    printf ("%s", months[month]);
    printf("\n\n Sun Mon Tue Wed Thu Fri Sat\n");

    // correct the position for the first date 
    for (day = 1 ; day <= 1 + daycode * 5)

  }
}