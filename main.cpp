#include <iostream>
#include <cstring>

using namespace std;

int main()
{
int stocks[] = {30,40,10}, needs[] = {10,20,30,20};
int shipments[3][4];

memset( shipments, 0, sizeof( shipments ) );

int min_val;
for( int i( 0 ); i < 3; ++i )
{
	for( int k( 0 ); k < 4; ++k )
	{
		if( needs[k] == 0 ) continue;

		min_val = std::min( stocks[i], needs[k] );
		shipments[i][k] = min_val;
		stocks[i] -= min_val;
		needs[k] -= min_val;

		if( stocks[i] == 0 ) break;
	}
}

for( int i( 0 ); i < 3; ++i )
{
	for( int k( 0 ); k < 4; ++k )
	{
		cout<<shipments[i][k]<<"\t";
	}
	cout<<endl;
}
}
