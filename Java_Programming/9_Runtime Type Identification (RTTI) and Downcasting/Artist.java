package rTTIanddowncasting;

public abstract class Artist {
	private String artistrName;

	public Artist(String artistrName) {

		this.artistrName = artistrName;
	}

	public String getArtistrName() {
		return artistrName;
	}

	public void setArtistrName(String artistrName) {
		this.artistrName = artistrName;
	}

}

class Painter extends Artist {

	public Painter(String artistrName) {
		super(artistrName);
	}

}

class Musician extends Artist {

	private String insrtumentName;

	public Musician(String artistrName, String insrtumentName) {
		super(artistrName);
		this.insrtumentName = insrtumentName;
	}

	public String getInsrtumentName() {
		return insrtumentName;
	}

	public void setInsrtumentName(String insrtumentName) {
		this.insrtumentName = insrtumentName;
	}

}

class Actor extends Artist {

	public Actor(String artistrName) {
		super(artistrName);
		// TODO Auto-generated constructor stub
	}

}

class CulturalFest {

	public static void checkMusicEventEligibility(Artist artist) {

		if (artist instanceof Musician) {

			Musician musician = (Musician) artist;

			System.out.println("Musician " + musician.getArtistrName()
					+ " is allowed for the Music Event and is playing " + musician.getInsrtumentName() + ".");

		} else {

			System.out.println(artist.getArtistrName() + " is not allowed for the Music Event.");
		}
	}

	public static void main(String[] args) {

		// Create Artist array
		Artist[] artists = { new Painter("Ravi"), new Musician("Aarav", "Guitar"), new Actor("Priya"),
				new Musician("Neha", "Violin") };

		// Iterate through array and check eligibility
		for (Artist artist : artists) {
			checkMusicEventEligibility(artist);
		}
	}
}
