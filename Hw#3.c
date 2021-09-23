#include <stdio.h>
int ques1(){
  int sum = 0;
  int x;
  for (x = 0; x < 1000; x++){
    if (x%3 == 0 || x%5 == 0){
      sum += x;
  }
  }
  printf("%d \n", sum);
  return sum;
    
}
// This takes a while to run
int ques5(){
    int x = 1;
    int ans;
    while(x != 0){
        int i;
        int sum = 0;
        for (int i = 1; i <= 20; i++ ){
            if (x % i == 0){
                sum++;
            }
        }
        if (sum == 20){
            ans = x;
            x = 0;
        }
        else{
            x++;
        }
    }
    return ans;
}
int ques6(){
    int i;
    int sum1 = 0;
    int sum2 = 0;
    for (i = 1; i <= 100; i++ ){
        sum1 += i*i;
    }
    for (i = 1; i <= 100; i++){
        sum2 += i;
    }
    return sum1-sum2;
}
int main(){
    printf("Question 1 ans: %d \n", ques1());
    printf("Question 5 ans: %d \n", ques5());
    printf("Question 6 ans: %d \n", ques6());
    return 0;
}
