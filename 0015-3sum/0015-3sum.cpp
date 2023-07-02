class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        int n=arr.size();

			// Brute Force Approach
        // set<vector<int>> st;

			// for(int i=0;i<n;i++){
			// 	for(int j=i+1;j<n;j++){
			// 		for(int k=j+1;k<n;k++){
			// 			if(arr[i]+arr[j]+arr[k]==K){
			// 				vector<int> temp={arr[i],arr[j],arr[k]};
			// 				sort(temp.begin(),temp.end());
			// 				st.insert(temp);
			// 			}
			// 		}
			// 	}
			// }

		// Better Approach 
		//   for(int i=0;i<n;i++){
		// 	set<int> hashset;

		// 	for(int j=i+1;j<n;j++){
		// 		int thirdEl = -(arr[i]+arr[j]);

		// 		if(hashset.find(thirdEl) != hashset.end()){
		// 			vector<int> temp={arr[i],arr[j],thirdEl};
		// 			sort(temp.begin(),temp.end());
		// 			st.insert(temp);
		// 		}

		// 		hashset.insert(arr[j]);
		// 	}
		// }

		// Optimal Approach
		vector<vector<int>> ans;

		sort(arr.begin(),arr.end());

		for(int i=0;i<n;i++){
			if(i>0 && arr[i]==arr[i-1]) continue;
			int j=i+1;
			int k=n-1;
		
		while(j<k){

			long long sum=arr[i]+arr[j]+arr[k];
			
			if(sum==0){
				vector<int> temp={arr[i],arr[j],arr[k]};
				ans.push_back(temp);
				j++;
				k--;
				while(j<k &&arr[j]==arr[j-1]) j++;
				while(j<k && arr[k]==arr[k+1]) k--;
			}

			else if(sum<0) j++;
			else k--;
		}
	}


	return ans;
        
    }
};