function is_prime(n::Int64)
	for i=2:sqrt(n)
		if n%i==0
			return false
		end
	end
	return true
end

println(is_prime(100))
println(is_prime(97))

f = (x)-> 5x^2 + 2x
println(f(1))