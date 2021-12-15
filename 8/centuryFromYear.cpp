int centuryFromYear(int year) 
{
  return year > (year - (year % 100)) ? year / 100 + 1 : year / 100;
}
