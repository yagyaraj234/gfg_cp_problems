class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char,int> mp;
	    
	    for(int i=0;i<n;i++){
	        mp[nuts[i]]++;
	    }
	    
	    
	    char arr[]={'!','#','$','%','&','*','@','^','~'};
	    
	    int j=0;
	    
	    for(int i=0;i<9;i++){
	        if(mp[arr[i]]>0){
	            nuts[j]=arr[i];
	            bolts[j]=arr[i];
	            j++;
	        }
	    }
	}

};
