class InputReader {


		private InputStream stream;

		private byte[] buf = new byte[1024];

		private int curChar;

		private int numChars;

		private SpaceCharFilter filter;


		public InputReader(InputStream stream) {

			this.stream = stream;

		}


		public int read() {

			if (numChars == -1)

				throw new InputMismatchException();

			if (curChar >= numChars) {

				curChar = 0;

				try {

					numChars = stream.read(buf);

				} catch (IOException e) {

					throw new InputMismatchException();

				}

				if (numChars <= 0)

					return -1;

			}

			return buf[curChar++];

		}


		public int readInt() {

			int c = read();

			while (isSpaceChar(c))

				c = read();

			int sgn = 1;

			if (c == '-') {

				sgn = -1;

				c = read();

			}

			int res = 0;

			do {

				if (c < '0' || c > '9')

					throw new InputMismatchException();

				res *= 10;

				res += c - '0';

				c = read();

			} while (!isSpaceChar(c));

			return res * sgn;

		}


		public String readString() {

			int c = read();

			while (isSpaceChar(c))

				c = read();

			StringBuilder res = new StringBuilder();

			do {

				res.appendCodePoint(c);

				c = read();

			} while (!isSpaceChar(c));

			return res.toString();

		}


		public boolean isSpaceChar(int c) {

			if (filter != null)

				return filter.isSpaceChar(c);

			return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;

		}


		public String next() {

			return readString();

		}


		public interface SpaceCharFilter {

			public boolean isSpaceChar(int ch);

		}

	}


class OutputWriter {

		private final PrintWriter writer;


		public OutputWriter(OutputStream outputStream) {

			writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));

		}


		public OutputWriter(Writer writer) {

			this.writer = new PrintWriter(writer);

		}


		public void print(Object...objects) {

			for (int i = 0; i < objects.length; i++) {

				if (i != 0)

					writer.print(' ');

				writer.print(objects[i]);

			}

		}


		public void printLine(Object...objects) {

			print(objects);

			writer.println();

		}


		public void close() {

			writer.close();

		}


		public void flush() {

			writer.flush();

		}


		}


class IOUtils {


		public static int[] readIntArray(InputReader in, int size) {

			int[] array = new int[size];

			for (int i = 0; i < size; i++)

				array[i] = in.readInt();

			return array;

		}


		}

//initialize

        InputReader in 		= new InputReader(System.in);

        OutputWriter out	=	new OutputWriter(System.out);

  

//read int

   int i = in.readInt();

//read string

   String s = in.readString();

//read int array of size N

   int[] x = IOUtils.readIntArray(in,N);

//printline

   out.printLine("X");



//flush output

   out.flush();


//remember to close the

//outputstream, at the end

   out.close();
