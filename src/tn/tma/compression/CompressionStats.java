package tn.tma.compression;

public class CompressionStats {
	private long size;
	private double compressionPercent;
	private int iteration;

	public CompressionStats() {
		super();
		setStats(0, 0, 0);

	}

	public CompressionStats(long size, double compressionPercent, int iteration) {
		super();
		setStats(size, compressionPercent, iteration);
	}

	public long getSize() {
		return size;
	}

	public void setSize(long size) {
		this.size = size;
	}

	public double getCompressionPercent() {
		return compressionPercent;
	}

	public void setCompressionPercent(double compressionPercent) {
		this.compressionPercent = compressionPercent;
	}

	public int getIteration() {
		return iteration;
	}

	public void setIteration(int iteration) {
		this.iteration = iteration;
	}
	
	public void setStats(long size, double compressionPercent, int iteration) {
		this.size = size;
		this.compressionPercent = compressionPercent;
		this.iteration = iteration;
	}

	@Override
	public String toString() {
		return "CompressionStats [size=" + size + " bytes, compressionPercent=" + compressionPercent + "%, iteration="
				+ iteration + "]";
	}

	
}
