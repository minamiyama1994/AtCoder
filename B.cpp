#include<iostream>
#include<iomanip>
#include<algorithm>
#include<iterator>
#include<deque>
#include<vector>
auto ok ( const std::deque < unsigned int > & queue ) -> bool
{
	unsigned prev = 0 ;
	for ( auto elem : queue )
	{
		if ( prev >= elem )
		{
			return false ;
		}
		prev = elem ;
	}
	return true ;
}
auto main ( ) -> int
{
	unsigned int N ;
	unsigned int K ;
	std::cin.sync_with_stdio ( false ) ;
	std::cin >> N >> K ;
	std::deque < unsigned int > queue ;
	int ok_count = 0 ;
	for ( unsigned int i = 0 ; i < N ; ++ i )
	{
		unsigned int n ;
		std::cin >> n ;
		queue.push_back ( n ) ;
		if ( queue.size ( ) == K )
		{
			ok_count += ok ( queue ) ;
			queue.pop_front ( ) ;
		}
	}
	std::cout << ok_count << std::endl ;
}