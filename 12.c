//12.Write a C program to input month number and print number of days in that month.

#include<stdio.h>
void check(int year,int month){
	if(year%400==0 || year%4==0 && year%100!=0){

  if  (month==1){
  printf("Janurary DAYS 31");

  }else if  (month==2){
    printf("february DAYS 29");
  
    }
    else if  (month==3){
        printf("march DAYS 31");
      
        }
        else if  (month==4){
            printf("april DAYS 30");
          
            }else if  (month==5){
                printf("may DAYS 31");
              
                }else if  (month==6){
                    printf("june DAYS 30");
                  
                    }else if  (month==7){
                        printf("july DAYS 31");
                      
                        }else if  (month==8){
                            printf("august DAYS 31");
                          
                            }else if  (month==9){
                                printf("september DAYS 30");
                              
                                }else if  (month==10){
                                    printf("october DAYS 31");
                                  
                                    }else if  (month==11){
                                      printf("november DAYS 30");
                                      
                                     }else if  (month==12){
                                         printf("december DAYS 31");
                                          
                                          }

	}else {
if  (month==1){
  printf("Janurary DAYS 31");

  }else if  (month==2){
    printf("february DAYS 28");
  
    }
    else if  (month==3){
        printf("march DAYS 31");
      
        }
        else if  (month==4){
            printf("april DAYS 30");
          
            }else if  (month==5){
                printf("may DAYS 31");
              
                }else if  (month==6){
                    printf("june DAYS 30");
                  
                    }else if  (month==7){
                        printf("july DAYS 31");
                      
                        }else if  (month==8){
                            printf("august DAYS 31");
                          
                            }else if  (month==9){
                                printf("september DAYS 30");
                              
                                }else if  (month==10){
                                    printf("october DAYS 31");
                                  
                                    }else if  (month==11){
                                      printf("november DAYS 30");
                                      
                                     }else if  (month==12){
                                         printf("december DAYS 31");
                                          
                                          }



	}

}
main(){
	int year,month;
	printf("enter the year");
	scanf("%d",&year);
	printf("enter the month number");
	scanf("%d",&month);
	check(year,month);
}