int rental_car_cost(int d)
{

  return d >= 7 ? 40 * d - 50 : d >= 3 ? 40 * d - 20 : 40 * d;
}
