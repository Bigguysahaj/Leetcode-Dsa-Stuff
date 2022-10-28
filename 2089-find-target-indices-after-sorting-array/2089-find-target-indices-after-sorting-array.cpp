class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int target) {
        
        
        sort(v.begin(),v.end());
        vector<int> vn;
        
        long long int n = v.size();
        long long int lo =0, hi = n;
        long long int mid;
        
        if(n==1 && v[n-1]==target){
            vn.push_back(n-1);
            return vn;
        }else if(n==1 && v[n-1]!= target){
            return vn;
        }
        
        
        while(lo <= hi){
            mid = (lo+hi)/2;
            if(target ==v[0]){
                mid =0;
            }
            
            if (v[mid]== target){
                vn.push_back(mid);
                int i =1;
                
                if (mid-i>=0)
                    while(v[mid-i]==target){
                        vn.push_back(mid-i);
                        i++;
                    }
                    i =1;
                    while(v[mid+i]==target){
                        vn.push_back(mid+i);
                        i++;
                    }
                break;
            }
            
            if (v[mid]>target){
                hi = mid -1;
            }
            
            if (v[mid]<target){
                lo = mid +1;
            }
        }
        
        sort(vn.begin(),vn.end());
        return vn;
        
    }
};