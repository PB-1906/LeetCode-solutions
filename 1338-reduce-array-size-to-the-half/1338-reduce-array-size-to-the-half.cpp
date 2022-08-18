class Solution {
public:
    int minSetSize(vector<int>& arr) {
           std::unordered_map<int, int> table;
        int minSize = 0;

        table.reserve(arr.size());

        for (const auto x : arr)
        {
            ++table[x];
        }

        std::vector<std::pair<int, int>> elems(table.begin(), table.end());
        std::sort(elems.begin(), elems.end(), [](const std::pair<int, int>& x, const std::pair<int, int>& y) { return x.second > y.second; });

        int totalSize = arr.size();

        for (int i = 0; totalSize > arr.size() / 2; ++i)
        {
            totalSize -= elems[i].second;
            ++minSize;
        };

        return minSize;
    }
};