package tn.tma.compression;

public abstract class CompressIterationListener {
	private boolean continueCompression;

	public CompressIterationListener() {
		super();
		this.continueCompression = true;
	}

	public boolean isContinueCompression() {
		return continueCompression;
	}

	public void stopCompression() {
		this.continueCompression = false;
	}
	
	
	public abstract void callbackFunction(CompressionStats stats);
}
