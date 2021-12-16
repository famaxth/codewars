int final_grade(int a, int b){
   return (a > 90 || b > 10) ? 100 : a > 75 & b >= 5 ? 90 : a > 50 & b >= 2 ? 75 : 0;
}
