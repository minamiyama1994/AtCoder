#include<iostream>
auto main ( ) -> int
{
	int n ;
	std::cin >> n ;
	if ( n <= 1 )
	{
		std::cout << "NO" << std::endl ;
		return 0 ;
	}
	for ( int i = 2 ; i * i <= n ; ++ i )
	{
		if ( ! ( n % i ) )
		{
			std::cout << "NO" << std::endl ;
			return 0 ;
		}
	}
	std::cout << "YES" << std::endl ;
}