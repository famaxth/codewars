int twice_as_old(int dad, int son) {
  int x = dad - (son * 2);
  return x <= 0 ? -x : x;
}
