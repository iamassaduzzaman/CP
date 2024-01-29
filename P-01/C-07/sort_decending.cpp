
    // normal way
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // easier way
    sort(v.begin(), v.end(), greater<int>());

    // easiest way
    sort(v.rbegin(), v.rend());

