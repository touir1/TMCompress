package tn.tma.compression;

public interface ICompressionHandler {
	public void compress(String source, String destination, int maxIterations);
	public void compress(String source, String destination, CompressIterationListener callback);
	public void decompress(String source, String destination, int iterationCount);
	public void decompress(String source, String destination, CompressIterationListener callback);
}
