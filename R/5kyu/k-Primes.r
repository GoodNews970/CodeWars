# k-Primes
# 
# A natural number is called k-prime if it has exactly k prime factors, counted with multiplicity. For example:
#   
#   k = 2  -->  4, 6, 9, 10, 14, 15, 21, 22, ...
#   k = 3  -->  8, 12, 18, 20, 27, 28, 30, ...
#   k = 5  -->  32, 48, 72, 80, 108, 112, ...
#   A natural number is thus prime if and only if it is 1-prime.
#   
#   Task:
#     Complete the function count_Kprimes (or countKprimes, count-K-primes, kPrimes) which is given parameters k, start, end (or nd)
#     and returns an array (or a list or a string depending on the language - see "Solution" and "Sample Tests") of the k-primes between
#     start (inclusive) and end (inclusive).
#   
#   Example:
#     countKprimes(5, 500, 600) --> [500, 520, 552, 567, 588, 592, 594]
#   Notes:
#     
#     The first function would have been better named: findKprimes or kPrimes :-)
# In C some helper functions are given (see declarations in 'Solution').
# For Go: nil slice is expected when there are no k-primes between start and end.
#
# Second Task (puzzle):
#   Given a positive integer s, find the total number of solutions of the equation a + b + c = s, where a is 1-prime, b is 3-prime, and c is 7-prime.
# 
# Call this function puzzle(s).
# 
# Examples:
# puzzle(138)  -->  1  because [2 + 8 + 128] is the only solution
# puzzle(143)  -->  2  because [3 + 12 + 128] and [7 + 8 + 128] are the solutions


countKprimes <- function(k, start, nd) {
  
  # Define Sieve of Eratothenes for prime generation (https://gist.github.com/seankross/5946396)
  sieveOfEratosthenes <- function(num){
    values <- rep(TRUE, num)
    values[1] <- FALSE
    prev.prime <- 2
    for(i in prev.prime:sqrt(num)){
      values[seq.int(2 * prev.prime, num, prev.prime)] <- FALSE
      prev.prime <- prev.prime + min(which(values[(prev.prime + 1) : num]))
    }
    return(which(values))
  }
  
  ## Perform prime factorization on each element between start and end, aggregating kprimes
  primes <- sieveOfEratosthenes(ceiling(sqrt(nd)))
  kprimes <- lapply(seq(start, nd, 1), function(p){
    if (p == 0){
      return(NULL)
    }
    i <- 1
    orig <- p
    fprimes <- vector()
    while(!(prod(fprimes) == orig)){
      while (p %% primes[i] == 0){
        fprimes <- append(fprimes, primes[i])
        p <- p / primes[i]
      }
      if (i == length(primes) & !(p == 1)) {
        fprimes <- append(fprimes, p)
      } else {
        i <- i + 1
      }
    }
    if (length(fprimes) == k){
      return(orig)
    } else {
      return(NULL)
    }
  })
  return(unlist(kprimes))
}

puzzle <- function(s) {
  a <- countKprimes(1, 1, s)
  b <- countKprimes(3, 1, s)
  c <- countKprimes(7, 1, s)
  length(which(rowSums(as.matrix(expand.grid(list(a, b, c))), na.rm = TRUE) == s))
}
