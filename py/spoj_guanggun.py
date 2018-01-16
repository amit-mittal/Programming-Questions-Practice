while True:
	try:
		val = int(raw_input())
		q = int(val/9)
		rem = val%9
		ans = q*81
		ans+=(rem**2)
		print ans

	except EOFError:
		break
