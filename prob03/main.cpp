// Sales prediction
#include <iostream>

int main()
{
  long int my_sales2;
  const double PERCENTAGE = 1.20;
  const long int LASTYEAR = 2103419277;
  //find sales
  


  my_sales2 = LASTYEAR * PERCENTAGE;
  std::cout << "Last years sales were $" << LASTYEAR << std::endl;
  std::cout << "This years sales prediction is $" << my_sales2 << std::endl;

  return 0;

}
