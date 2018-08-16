#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	long n,h,a,b,query,ta,tb,fa,fb;
	
	cin>>n>>h>>a>>b>>query;
	
	for(int i=0;i<query;i++){
	    
	    cin>>ta>>fa>>tb>>fb;
	    
	    long steps = 0;
	    
	    if(ta==tb)
	        steps = abs(fa-fb);
	    else {
	        if(fa>=a && fa<=b)
	            steps = abs(ta-tb) + abs(fa-fb);
	        else if(fa<a)
	                steps = abs(ta-tb) + abs(a-fb) + abs(fa-a);
	        else if(fa>b)
	                steps = abs (ta-tb) + abs(b-fb) + abs(fa-b);
	    }
	    
	 
	    cout<<steps<<endl;
	}
	
	return 0;
}
