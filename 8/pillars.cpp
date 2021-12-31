long pillars(int n, int d, int w) {
    return n == 2 ? d * 100 : n < 2 ? 0 : n * ((d * 100) + w) - (w * 2) - (d * 100);
}
