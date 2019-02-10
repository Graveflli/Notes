#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto Sortvector(vector<int> & nums)
{
	auto iter = nums.begin();
	sort(iter,iter + nums.size() - 1,[&](int a,int b) -> int { return a < b ? 1 : 0;});
	return nums;	
}
void Printvector(vector<int> nums)
{
	for(auto i : nums)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

vector<vector<int>> threesum(vector<int> & nums)
{
	vector<int> n = Sortvector(nums);
	cout<<"n is [";
	Printvector(nums);
	cout<<"]"<<endl;
	vector<vector<int>> sum;
	for(int i = 0;i < n.size();i++)
	{
//		if(n[i] == n[i - 1] && i > 0)
//			continue;

		for(auto j = i + 1;j < n.size();++j)
		{
			for(auto k = j + 1;k < n.size();++k)
			{
				if(n[j] + n[k] + n[i] == 0)
				{
					cout<<"i j k is ["<<i<<" "<<j<<" "<<k<<"]  and n[i,j,k] is"<<n[i]<<"  "<<n[j]<<"  "<<n[k]<<endl;
					vector<int> a = {n[i],n[j],n[k]};
					int flag = 0;
					for(auto t : sum)
					{
						if(a == t)
						{
							flag = 1;
						}
					}
					if(!flag)
						sum.push_back(a);
				}
			}
		}
	}	
	return sum;	
}
int main()
{
	vector<int> nums = {-1,0,1,2,-1,4};
	Printvector(nums);
	Printvector(Sortvector(nums));
	cout<<"---------------"<<endl;
	auto sum = threesum(nums);
    for(auto i : sum)
	{
		Printvector(i);
	}	
}

