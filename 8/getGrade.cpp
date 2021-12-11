char getGrade(int a, int b, int c) {
    int x = (a + b + c) / 3;
    if ((90 <= x) & (x <= 100)) return 'A';
    else if ((80 <= x) & (x <= 90)) return 'B';
    else if ((70 <= x) & (x <= 80)) return 'C';
    else if ((60 <= x) & (x <= 70)) return 'D';
    else return 'F';
}
