#include "ProfileImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ProfileImpl::ProfileImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	m_metaclassReference.reset(new std::vector<std::shared_ptr<uml::ElementImport>>());
	m_metamodelReference.reset(new std::vector<std::shared_ptr<uml::PackageImport>>());
}

ProfileImpl::~ProfileImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Profile "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ProfileImpl::ProfileImpl(const ProfileImpl & obj)
{
	//create copy of all Attributes
	m_URI = obj.getURI();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> _importedMember = obj.getImportedMember();
	this->getImportedMember()->insert(this->getImportedMember()->end(), _importedMember->begin(), _importedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member = obj.getMember();
	this->getMember()->insert(this->getMember()->end(), _member->begin(), _member->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> _metaclassReference = obj.getMetaclassReference();
	this->getMetaclassReference()->insert(this->getMetaclassReference()->end(), _metaclassReference->begin(), _metaclassReference->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> _metamodelReference = obj.getMetamodelReference();
	this->getMetamodelReference()->insert(this->getMetamodelReference()->end(), _metamodelReference->begin(), _metamodelReference->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Package>>> _nestedPackage = obj.getNestedPackage();
	this->getNestedPackage()->insert(this->getNestedPackage()->end(), _nestedPackage->begin(), _nestedPackage->end());

	m_nestingPackage  = obj.getNestingPackage();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember = obj.getOwnedMember();
	this->getOwnedMember()->insert(this->getOwnedMember()->end(), _ownedMember->begin(), _ownedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Stereotype>>> _ownedStereotype = obj.getOwnedStereotype();
	this->getOwnedStereotype()->insert(this->getOwnedStereotype()->end(), _ownedStereotype->begin(), _ownedStereotype->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Type>>> _ownedType = obj.getOwnedType();
	this->getOwnedType()->insert(this->getOwnedType()->end(), _ownedType->begin(), _ownedType->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> _elementImportList = obj.getElementImport();
	for(std::shared_ptr<uml::ElementImport> _elementImport : *_elementImportList)
	{
		this->getElementImport()->push_back(std::shared_ptr<uml::ElementImport>(dynamic_cast<uml::ElementImport*>(_elementImport->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _ownedRuleList = obj.getOwnedRule();
	for(std::shared_ptr<uml::Constraint> _ownedRule : *_ownedRuleList)
	{
		this->getOwnedRule()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_ownedRule->copy())));
	}
	if(obj.getOwnedTemplateSignature()!=nullptr)
	{
		m_ownedTemplateSignature.reset(dynamic_cast<uml::TemplateSignature*>(obj.getOwnedTemplateSignature()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> _packageImportList = obj.getPackageImport();
	for(std::shared_ptr<uml::PackageImport> _packageImport : *_packageImportList)
	{
		this->getPackageImport()->push_back(std::shared_ptr<uml::PackageImport>(dynamic_cast<uml::PackageImport*>(_packageImport->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageMerge>>> _packageMergeList = obj.getPackageMerge();
	for(std::shared_ptr<uml::PackageMerge> _packageMerge : *_packageMergeList)
	{
		this->getPackageMerge()->push_back(std::shared_ptr<uml::PackageMerge>(dynamic_cast<uml::PackageMerge*>(_packageMerge->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> _packagedElementList = obj.getPackagedElement();
	for(std::shared_ptr<uml::PackageableElement> _packagedElement : *_packagedElementList)
	{
		this->getPackagedElement()->push_back(std::shared_ptr<uml::PackageableElement>(dynamic_cast<uml::PackageableElement*>(_packagedElement->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ProfileApplication>>> _profileApplicationList = obj.getProfileApplication();
	for(std::shared_ptr<uml::ProfileApplication> _profileApplication : *_profileApplicationList)
	{
		this->getProfileApplication()->push_back(std::shared_ptr<uml::ProfileApplication>(dynamic_cast<uml::ProfileApplication*>(_profileApplication->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateBinding>>> _templateBindingList = obj.getTemplateBinding();
	for(std::shared_ptr<uml::TemplateBinding> _templateBinding : *_templateBindingList)
	{
		this->getTemplateBinding()->push_back(std::shared_ptr<uml::TemplateBinding>(dynamic_cast<uml::TemplateBinding*>(_templateBinding->copy())));
	}
}

ecore::EObject *  ProfileImpl::copy() const
{
	return new ProfileImpl(*this);
}

std::shared_ptr<ecore::EClass> ProfileImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getProfile();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<ecore::EObject>  ProfileImpl::create(std::shared_ptr<uml::Classifier>  classifier) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<ecore::EPackage>  ProfileImpl::define() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<ecore::EPackage>  ProfileImpl::define(std::map <   std::string, std::string >  options,boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<ecore::EPackage>  ProfileImpl::getDefinition() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<ecore::ENamedElement>  ProfileImpl::getDefinition(std::shared_ptr<uml::NamedElement>  namedElement) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Extension>>> ProfileImpl::getOwnedExtensions(bool requiredOnly) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Class>>> ProfileImpl::getReferencedMetaclasses() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<std::vector<std::shared_ptr<uml::Model>>> ProfileImpl::getReferencedMetamodels() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ProfileImpl::isDefined() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ProfileImpl::metaclass_reference_not_specialized(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ProfileImpl::references_same_metamodel(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> ProfileImpl::getMetaclassReference() const
{

    return m_metaclassReference;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> ProfileImpl::getMetamodelReference() const
{

    return m_metamodelReference;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element> ProfileImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}
	if(getOwningTemplateParameter()!=nullptr)
	{
		_owner = getOwningTemplateParameter();
	}

	return _owner;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ProfileImpl::getMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> importedMember = getImportedMember();
	_member->insert(_member->end(), importedMember->begin(), importedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_member->insert(_member->end(), ownedMember->begin(), ownedMember->end());

	return _member;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ProfileImpl::getOwnedMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> ownedRule = getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> packagedElement = getPackagedElement();
	_ownedMember->insert(_ownedMember->end(), packagedElement->begin(), packagedElement->end());

	return _ownedMember;
}
std::shared_ptr<uml::Namespace> ProfileImpl::getNamespace() const
{
	std::shared_ptr<uml::Namespace> _namespace = nullptr ;
	
	if(getNestingPackage()!=nullptr)
	{
		_namespace = getNestingPackage();
	}

	return _namespace;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ProfileImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> elementImport = getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_ownedElement->insert(_ownedElement->end(), ownedMember->begin(), ownedMember->end());
	_ownedElement->push_back(getOwnedTemplateSignature());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> packageImport = getPackageImport();
	_ownedElement->insert(_ownedElement->end(), packageImport->begin(), packageImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageMerge>>> packageMerge = getPackageMerge();
	_ownedElement->insert(_ownedElement->end(), packageMerge->begin(), packageMerge->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ProfileApplication>>> profileApplication = getProfileApplication();
	_ownedElement->insert(_ownedElement->end(), profileApplication->begin(), profileApplication->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateBinding>>> templateBinding = getTemplateBinding();
	_ownedElement->insert(_ownedElement->end(), templateBinding->begin(), templateBinding->end());

	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ProfileImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::PACKAGE_URI:
			return getURI(); //1220
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //124
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //120
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //1211
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //1214
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //1215
		case UmlPackage::PROFILE_METACLASSREFERENCE:
			return getMetaclassReference(); //1228
		case UmlPackage::PROFILE_METAMODELREFERENCE:
			return getMetamodelReference(); //1229
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //125
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //126
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //127
		case UmlPackage::PACKAGE_NESTEDPACKAGE:
			return getNestedPackage(); //1221
		case UmlPackage::PACKAGE_NESTINGPACKAGE:
			return getNestingPackage(); //1222
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //121
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //122
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //1213
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //1210
		case UmlPackage::PACKAGE_OWNEDSTEREOTYPE:
			return getOwnedStereotype(); //1223
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //125
		case UmlPackage::PACKAGE_OWNEDTYPE:
			return getOwnedType(); //1224
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //123
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //124
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //1212
		case UmlPackage::PACKAGE_PACKAGEMERGE:
			return getPackageMerge(); //1225
		case UmlPackage::PACKAGE_PACKAGEDELEMENT:
			return getPackagedElement(); //1226
		case UmlPackage::PACKAGE_PROFILEAPPLICATION:
			return getProfileApplication(); //1227
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //128
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //124
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //125
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //129
	}
	return boost::any();
}
