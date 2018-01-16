import util

def totient(n):
  pf = set(util.prime_factors(n))
  return n-1 + sum([
    (-1)**i*((n-1)/reduce(lambda x,y:x*y, comb))
    for i in range(1,len(pf)+1)
    for comb in itertools.combinations(pf, i)])

print totient(1000000)
