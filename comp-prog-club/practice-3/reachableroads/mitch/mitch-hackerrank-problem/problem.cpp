/*
 * You have a pair of numbers: (a, b)
 * You can do two operations on those numbers: either (a, b) --> (a + b, b) 
 * Or (a, b) --> (a, a + b)
 *
 * Determine whether or not a pair of numbers (a, b) can become another pair of numbers (c, d)
 *
 *
 */

// hashmap (a, b) -> boolean
bool check(int a, int b, int c, int d) {
  if (a == c && b == d) {return true;}
  if (a > c || b > d) {return false;}
  return check(a + b, b, c, d) || check(a, b + a, c, d);
}
