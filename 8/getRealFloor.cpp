int getRealFloor(int f) {
  return f >= 13 ? f - 2 : f <= 0 ? f : f - 1;
}
