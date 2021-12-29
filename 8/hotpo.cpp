unsigned int hotpo(unsigned int n){
    int i = 0;
    if (n == 0 || n == 1) return i;
    else {
        while (n != 1) {
            n % 2 == 0 ? n /= 2 : n = n * 3 + 1;
            i++;
        }
    }
    return i;
}
