/* Calculate average

Write function avg which calculates average of numbers in given list. */

double find_average(double* array, int length) {
  double sum=0;
  int i=0;
  while (i < length)
  {
      sum = sum + array[i];
      i++; 
  }
  double avg = sum / length;
  return avg;
}