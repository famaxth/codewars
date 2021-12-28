int seats_in_theater(int tc, int tr, int c, int r) {
  return (tr - r) * (tc - c + 1);
}
