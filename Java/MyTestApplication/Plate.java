public class Plate {

    private boolean isClean;
	
	private int id;

    public Plate(int id) {
		this.id = id;
	}

	public boolean isClean() {
		return isClean;
	}

	public void setClean(boolean isClean) {
		this.isClean = isClean;
	}
	
	public int getId() {
		return id;
	}


}
