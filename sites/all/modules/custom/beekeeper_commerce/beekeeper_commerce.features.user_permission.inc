<?php
/**
 * @file
 * beekeeper_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beekeeper_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_extra'.
  $permissions['administer commerce_extra'] = array(
    'name' => 'administer commerce_extra',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_extra',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer custom offline payments'.
  $permissions['administer custom offline payments'] = array(
    'name' => 'administer custom offline payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cop',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle beekeeper_magazine_subscription'.
  $permissions['create commerce_product entities of bundle beekeeper_magazine_subscription'] = array(
    'name' => 'create commerce_product entities of bundle beekeeper_magazine_subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle membership_entity_product'.
  $permissions['create commerce_product entities of bundle membership_entity_product'] = array(
    'name' => 'create commerce_product entities of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle merchandise_baseball_cap'.
  $permissions['create commerce_product entities of bundle merchandise_baseball_cap'] = array(
    'name' => 'create commerce_product entities of bundle merchandise_baseball_cap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle merchandise_t_shirt'.
  $permissions['create commerce_product entities of bundle merchandise_t_shirt'] = array(
    'name' => 'create commerce_product entities of bundle merchandise_t_shirt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle merchandise_transfer'.
  $permissions['create commerce_product entities of bundle merchandise_transfer'] = array(
    'name' => 'create commerce_product entities of bundle merchandise_transfer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle nucleus_colony'.
  $permissions['create commerce_product entities of bundle nucleus_colony'] = array(
    'name' => 'create commerce_product entities of bundle nucleus_colony',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create merchandise_display content'.
  $permissions['create merchandise_display content'] = array(
    'name' => 'create merchandise_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'create product_display content'.
  $permissions['create product_display content'] = array(
    'name' => 'create product_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any merchandise_display content'.
  $permissions['delete any merchandise_display content'] = array(
    'name' => 'delete any merchandise_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_display content'.
  $permissions['delete any product_display content'] = array(
    'name' => 'delete any product_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own merchandise_display content'.
  $permissions['delete own merchandise_display content'] = array(
    'name' => 'delete own merchandise_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_display content'.
  $permissions['delete own product_display content'] = array(
    'name' => 'delete own product_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete terms in merchandise_baseball_cap_colour'.
  $permissions['delete terms in merchandise_baseball_cap_colour'] = array(
    'name' => 'delete terms in merchandise_baseball_cap_colour',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in merchandise_catalogue'.
  $permissions['delete terms in merchandise_catalogue'] = array(
    'name' => 'delete terms in merchandise_catalogue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in merchandise_t_shiirt_colours'.
  $permissions['delete terms in merchandise_t_shiirt_colours'] = array(
    'name' => 'delete terms in merchandise_t_shiirt_colours',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in merchandise_t_shirt_sizes'.
  $permissions['delete terms in merchandise_t_shirt_sizes'] = array(
    'name' => 'delete terms in merchandise_t_shirt_sizes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in merchandise_transfer_design'.
  $permissions['delete terms in merchandise_transfer_design'] = array(
    'name' => 'delete terms in merchandise_transfer_design',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle beekeeper_magazine_subscription'.
  $permissions['edit any commerce_product entity of bundle beekeeper_magazine_subscription'] = array(
    'name' => 'edit any commerce_product entity of bundle beekeeper_magazine_subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle membership_entity_product'.
  $permissions['edit any commerce_product entity of bundle membership_entity_product'] = array(
    'name' => 'edit any commerce_product entity of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle merchandise_baseball_cap'.
  $permissions['edit any commerce_product entity of bundle merchandise_baseball_cap'] = array(
    'name' => 'edit any commerce_product entity of bundle merchandise_baseball_cap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle merchandise_t_shirt'.
  $permissions['edit any commerce_product entity of bundle merchandise_t_shirt'] = array(
    'name' => 'edit any commerce_product entity of bundle merchandise_t_shirt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle merchandise_transfer'.
  $permissions['edit any commerce_product entity of bundle merchandise_transfer'] = array(
    'name' => 'edit any commerce_product entity of bundle merchandise_transfer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle nucleus_colony'.
  $permissions['edit any commerce_product entity of bundle nucleus_colony'] = array(
    'name' => 'edit any commerce_product entity of bundle nucleus_colony',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any merchandise_display content'.
  $permissions['edit any merchandise_display content'] = array(
    'name' => 'edit any merchandise_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_display content'.
  $permissions['edit any product_display content'] = array(
    'name' => 'edit any product_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle beekeeper_magazine_subscription'.
  $permissions['edit own commerce_product entities of bundle beekeeper_magazine_subscription'] = array(
    'name' => 'edit own commerce_product entities of bundle beekeeper_magazine_subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle membership_entity_product'.
  $permissions['edit own commerce_product entities of bundle membership_entity_product'] = array(
    'name' => 'edit own commerce_product entities of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle merchandise_baseball_cap'.
  $permissions['edit own commerce_product entities of bundle merchandise_baseball_cap'] = array(
    'name' => 'edit own commerce_product entities of bundle merchandise_baseball_cap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle merchandise_t_shirt'.
  $permissions['edit own commerce_product entities of bundle merchandise_t_shirt'] = array(
    'name' => 'edit own commerce_product entities of bundle merchandise_t_shirt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle merchandise_transfer'.
  $permissions['edit own commerce_product entities of bundle merchandise_transfer'] = array(
    'name' => 'edit own commerce_product entities of bundle merchandise_transfer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle nucleus_colony'.
  $permissions['edit own commerce_product entities of bundle nucleus_colony'] = array(
    'name' => 'edit own commerce_product entities of bundle nucleus_colony',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own merchandise_display content'.
  $permissions['edit own merchandise_display content'] = array(
    'name' => 'edit own merchandise_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_display content'.
  $permissions['edit own product_display content'] = array(
    'name' => 'edit own product_display content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in merchandise_baseball_cap_colour'.
  $permissions['edit terms in merchandise_baseball_cap_colour'] = array(
    'name' => 'edit terms in merchandise_baseball_cap_colour',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in merchandise_catalogue'.
  $permissions['edit terms in merchandise_catalogue'] = array(
    'name' => 'edit terms in merchandise_catalogue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in merchandise_t_shiirt_colours'.
  $permissions['edit terms in merchandise_t_shiirt_colours'] = array(
    'name' => 'edit terms in merchandise_t_shiirt_colours',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in merchandise_t_shirt_sizes'.
  $permissions['edit terms in merchandise_t_shirt_sizes'] = array(
    'name' => 'edit terms in merchandise_t_shirt_sizes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in merchandise_transfer_design'.
  $permissions['edit terms in merchandise_transfer_design'] = array(
    'name' => 'edit terms in merchandise_transfer_design',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle beekeeper_magazine_subscription'.
  $permissions['view any commerce_product entity of bundle beekeeper_magazine_subscription'] = array(
    'name' => 'view any commerce_product entity of bundle beekeeper_magazine_subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle membership_entity_product'.
  $permissions['view any commerce_product entity of bundle membership_entity_product'] = array(
    'name' => 'view any commerce_product entity of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle merchandise_baseball_cap'.
  $permissions['view any commerce_product entity of bundle merchandise_baseball_cap'] = array(
    'name' => 'view any commerce_product entity of bundle merchandise_baseball_cap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle merchandise_t_shirt'.
  $permissions['view any commerce_product entity of bundle merchandise_t_shirt'] = array(
    'name' => 'view any commerce_product entity of bundle merchandise_t_shirt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle merchandise_transfer'.
  $permissions['view any commerce_product entity of bundle merchandise_transfer'] = array(
    'name' => 'view any commerce_product entity of bundle merchandise_transfer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle nucleus_colony'.
  $permissions['view any commerce_product entity of bundle nucleus_colony'] = array(
    'name' => 'view any commerce_product entity of bundle nucleus_colony',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle beekeeper_magazine_subscription'.
  $permissions['view own commerce_product entities of bundle beekeeper_magazine_subscription'] = array(
    'name' => 'view own commerce_product entities of bundle beekeeper_magazine_subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle membership_entity_product'.
  $permissions['view own commerce_product entities of bundle membership_entity_product'] = array(
    'name' => 'view own commerce_product entities of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle merchandise_baseball_cap'.
  $permissions['view own commerce_product entities of bundle merchandise_baseball_cap'] = array(
    'name' => 'view own commerce_product entities of bundle merchandise_baseball_cap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle merchandise_t_shirt'.
  $permissions['view own commerce_product entities of bundle merchandise_t_shirt'] = array(
    'name' => 'view own commerce_product entities of bundle merchandise_t_shirt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle merchandise_transfer'.
  $permissions['view own commerce_product entities of bundle merchandise_transfer'] = array(
    'name' => 'view own commerce_product entities of bundle merchandise_transfer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle nucleus_colony'.
  $permissions['view own commerce_product entities of bundle nucleus_colony'] = array(
    'name' => 'view own commerce_product entities of bundle nucleus_colony',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  return $permissions;
}
