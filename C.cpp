#include<iostream>
#include<vector>
#include<algorithm>
auto chose ( std::vector < int >::iterator begin , std::vector < int >::iterator end , int N ) -> int
{
	 if ( begin == end )
	 {
		return ! N ;
	 }
	 if ( * begin >= N )
	 {
		return chose ( begin + 1 , end , N ) + ( * begin == N ) ;
	 }
	 return chose ( begin + 1 , end , N - * begin ) + chose ( begin + 1 , end , N ) ;
}
auto main ( ) -> int
{
	std::vector < int > table ;
	int N ;
	int X ;
	std::cin >> N >> X ;
	for ( int i = 0 ; i < N ; ++ i )
	{
		table.emplace_back ( ) ;
		std::cin >> table.back ( ) ;
	}
	std::sort ( table.begin ( ) , table.end ( ) ) ;
	std::cout << chose ( table.begin ( ) , table.end ( ) , X ) << std::endl ;
}