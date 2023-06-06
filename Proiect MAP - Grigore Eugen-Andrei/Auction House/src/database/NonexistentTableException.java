package database;

public class NonexistentTableException extends Exception {
    public NonexistentTableException(String errorMessage) {
        super(errorMessage);
    }

}
