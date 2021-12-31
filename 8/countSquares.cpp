int countSquares(int c)
{
    return c == 0 ? 1 : 2 * (3 * c * c + 1);
}
