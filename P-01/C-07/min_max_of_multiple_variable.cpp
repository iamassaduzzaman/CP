  int a = 1, b = 2, c = 3, d = 4;
  // normal way
  int mn = min(a, min(b, min(c, d)));
  int mx = max(a, max(b, max(c, d)));

  // easiest way
  int mn = min({a, b, c, d});
  int mx = max({a, b, c, d});