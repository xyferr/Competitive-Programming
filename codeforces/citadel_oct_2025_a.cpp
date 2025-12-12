#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getMaximumTeamSize' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY startTime
 *  2. INTEGER_ARRAY endTime
 */

int getMaximumTeamSize(vector<int> startTime, vector<int> endTime) {
    vector<pair<int,int>>tf;
    int n=startTime.size();
    for(int i=0; i<n; i++){
        tf.push_back({startTime[i],endTime[i]});
    }
    sort(tf.begin(),tf.end());
    sort(startTime.begin(),startTime.end());
    sort(endTime.begin(),endTime.end());
    int maxTeamSize=0;

    for(int i=0; i<n; i++){
        int start = tf[i].first;
        int end = tf[i].second;
        int left = lower_bound(endTime.begin(),endTime.end(),start)-endTime.begin();
        int right = upper_bound(startTime.begin(),startTime.end(),end)-startTime.begin();
        int teamSize = right - left;
        maxTeamSize = max(maxTeamSize,teamSize);

        
    }
    return maxTeamSize;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string startTime_count_temp;
    getline(cin, startTime_count_temp);

    int startTime_count = stoi(ltrim(rtrim(startTime_count_temp)));

    vector<int> startTime(startTime_count);

    for (int i = 0; i < startTime_count; i++) {
        string startTime_item_temp;
        getline(cin, startTime_item_temp);

        int startTime_item = stoi(ltrim(rtrim(startTime_item_temp)));

        startTime[i] = startTime_item;
    }

    string endTime_count_temp;
    getline(cin, endTime_count_temp);

    int endTime_count = stoi(ltrim(rtrim(endTime_count_temp)));

    vector<int> endTime(endTime_count);

    for (int i = 0; i < endTime_count; i++) {
        string endTime_item_temp;
        getline(cin, endTime_item_temp);

        int endTime_item = stoi(ltrim(rtrim(endTime_item_temp)));

        endTime[i] = endTime_item;
    }

    int result = getMaximumTeamSize(startTime, endTime);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
