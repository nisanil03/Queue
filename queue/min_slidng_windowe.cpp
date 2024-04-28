#include <bits/stdc++.h>
using namespace std;

int sumofminmaxfallwindowofsize(vector<int> &nums, int k)
{
    deque<int> dq, dq2;
    int ans = 0;
    // first window o f size k
    for (int i = 0; i < k; i++)
    {
        // chote element remove karodo
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }
        // remover or the big element
        while (!dq2.empty() && nums[i] <= nums[dq2.back()])
        {
            dq2.pop_back();
        }
        // inserting indes , so tht we can checkout of window element
        dq.push_back(i);
        dq2.push_back(i);
    }
    ans += nums[dq.front()] + nums[dq2.front()];

    // remaining window ko process
    for (int i = k; i < nums.size(); i++)
    {
        // out of window  element ko remove kardo
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }
        if (!dq2.empty() && i - dq2.front() >= k)
        {
            dq2.pop_front();
        }
        // ab ferse current element k liye chote element ko remove karna hai
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }
        while (!dq2.empty() && nums[i] <= nums[dq2.back()])
        {
            dq2.pop_back();
        }
        // inserting indes , so tht we can checkout of window element
        dq.push_back(i);
        dq2.push_back(i);

        // current windoe ka answer  store karna hai
        ans += nums[dq.front()] + nums[dq2.front()];
    }
    return ans;
}
int main()
{
    vector<int> v{2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << sumofminmaxfallwindowofsize(v, k);

    return 0;
}