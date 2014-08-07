(function($) {
  $(document).ready(function() {
    $('#edit-types.search-ext-select').change(function() {
      $('#easyddb-search-ext-form').submit();
      Drupal.TingSearchOverlay();
    });
  });
}(jQuery));

