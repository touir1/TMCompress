package tn.tma.compression;

public class CompressionHandler implements ICompressionHandler {

	@Override
	public void compress(String source, String destination, int maxIterations) {
		// TODO
		System.out.println("compress: [source: " + source + ", destination: " + destination + ", maxIterations: "
				+ maxIterations + "]");
	}

	@Override
	public void compress(String source, String destination, CompressIterationListener callback) {
		System.out.println("compress: [source: " + source + ", destination: " + destination + ", callback: "
				+ callback + "]");
	}

	@Override
	public void decompress(String source, String destination, int iterationCount) {
		// TODO
		System.out.println("decompress: [source: " + source + ", destination: " + destination + ", iterationCount: "
				+ iterationCount + "]");
	}

	@Override
	public void decompress(String source, String destination, CompressIterationListener callback) {
		// TODO
		System.out.println("decompress: [source: " + source + ", destination: " + destination + ", callback: "
				+ callback + "]");
	}

}
