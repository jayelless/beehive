<?php
/**
 * @file
 * beekeeper_commerce.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function beekeeper_commerce_taxonomy_default_vocabularies() {
  return array(
    'merchandise_baseball_cap_colour' => array(
      'name' => 'Merchandise: Baseball cap colour',
      'machine_name' => 'merchandise_baseball_cap_colour',
      'description' => 'Merchandise: Baseball cap colour',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'merchandise_catalogue' => array(
      'name' => 'Merchandise Catalogue',
      'machine_name' => 'merchandise_catalogue',
      'description' => 'Catalog for types of merchandise',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'merchandise_t_shiirt_colours' => array(
      'name' => 'Merchandise: T-shirt colours',
      'machine_name' => 'merchandise_t_shiirt_colours',
      'description' => 'Merchandise: T-shirt colours',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'merchandise_t_shirt_sizes' => array(
      'name' => 'Merchandise: T-shirt sizes',
      'machine_name' => 'merchandise_t_shirt_sizes',
      'description' => 'Merchandise: T-shirt sizes',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'merchandise_transfer_design' => array(
      'name' => 'Merchandise: Transfer design',
      'machine_name' => 'merchandise_transfer_design',
      'description' => 'Merchandise: Transfer design',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
