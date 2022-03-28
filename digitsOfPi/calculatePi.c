/** Taken from Tom Deakin's slides available at:
 * https://learn-eu-central-1-prod-fleet01-xythos.content.blackboardcdn.com/60e83182c0bd4/8352156?X-Blackboard-Expiration=1648242000000&X-Blackboard-Signature=n2wq%2FpccaU1O65T10Yc7%2FMWsoYik2kjSQc0AoQd4mWs%3D&X-Blackboard-Client-Id=113292&response-cache-control=private%2C%20max-age%3D21600&response-content-disposition=inline%3B%20filename%2A%3DUTF-8%27%27HPC_week_3_lecture_6_OpenMP_reductions.pdf&response-content-type=application%2Fpdf&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaDGV1LWNlbnRyYWwtMSJIMEYCIQCMT7%2FGINKkV99o1rDFsnupUqhD%2F5MZnfV%2Fo7Xeh3XYvAIhAM8lRdch3B%2BMgcLsukzP43abZ0YmPPVYVlphuQ26Vt8bKoAECHoQAhoMNjM1NTY3OTI0MTgzIgx1ZqvG1e%2B2hXBt3Z4q3QP9%2BVN6QCrhWAzr1yMQK5Uca45onnQjTbvFRp6dm71PlH2aEiWhhQnXKm%2FiBVfxbU7dWOiQxPdKmmg4msexJLcOPXrYGDXvvEi9PYJbAIOXX3gBHUrODUrZoVNXJxm0053uNHabkPXXOAai7uOU49RyNEj1XG%2FOfamRGD6kAIFyNLP%2FHklLX5ooggbNBW9I2FkBTYP9mJyOQybC1oIx3lPxmHsYBNMH29jsMzI8CZ%2BnrnChnwB23sVeHr1e3g9JpxxboG1oOhsjBa3hAcJIur%2B1%2B%2FYd0j2UCc4pguoLTPczAq4rOSjRnNsoDqiHrxr8Me5sjB%2B3NBXIXwHexjLZejaghFyh5sLZ1Cg2Wv2IpUzbOP8iZniikJtJlMVWLJFOwVd7imB8VFU516LVkwZEZCsqDdn9ka9qfFnYlUY5sm2ymHsmST9E99PFdaIESEWvt%2FEsfKlnOoNlqw9LEOxTAlCtAgLoOjCf5WZx8KpRXxKqRnlweGFMOcscNGHIZ%2FIP0bBJhMjf016Gqn1g34onS4LPhG3zaKwtq0kr8HtMAmFIfqJpsJHqKMD62B67QyY6SdRlN5Ba6S%2BPIi6OwHakK31wYHqgdTS7ed3LVFBIgA2DGtxaeaIwYrz1CXEyLbEwueT3kQY6pAGxC%2FHcwoIdJ0XEbiNJZhAo6ftEkQdsYxM95ODKFePFaWpA%2FIkqHTuKF80NCoA7F5kG%2BCKPkuZKfAEQY73Q8Akn9xIT8c8upvJMHbCOlDI7I98fBfUceNs03Gclr2Lqd%2BK315%2F5TdN%2F3S76x4bPkrcUEukZlHq7evbUjnvu%2BJrfLtpRR024sXyjrYFLWEpEZeNEbnkOu3zqQjxvw7h2q%2BA7yftKFA%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20220325T150000Z&X-Amz-SignedHeaders=host&X-Amz-Expires=21600&X-Amz-Credential=ASIAZH6WM4PLV7MMNTDP%2F20220325%2Feu-central-1%2Fs3%2Faws4_request&X-Amz-Signature=3287354e4101160e601814888f35b9ef449ed6fad4dac03347f5e978a92ed3a3
 */

#include <stdio.h>

double calcPi(int num_steps) {
  double step, x, sum, pi;
  step = 1.0 / num_steps;
  for (int ii = 1; ii <= num_steps; ++ii) {
    x = (ii - 0.5) * step;
    sum = sum + (4.0 / (1.0 + x * x));
  }
  pi = step * sum;
  return pi;
}


int main() {
  printf("pi = = %.80f\n", calcPi(100000000));
  return 0;
}
