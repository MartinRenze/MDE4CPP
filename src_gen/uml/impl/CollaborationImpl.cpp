#include "CollaborationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CollaborationImpl::CollaborationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	m_collaborationRole.reset(new std::vector<std::shared_ptr<uml::ConnectableElement>>());
}

CollaborationImpl::~CollaborationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Collaboration "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

CollaborationImpl::CollaborationImpl(const CollaborationImpl & obj)
{
	//create copy of all Attributes
	m_isAbstract = obj.getIsAbstract();
	m_isFinalSpecialization = obj.getIsFinalSpecialization();
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _attribute = obj.getAttribute();
	this->getAttribute()->insert(this->getAttribute()->end(), _attribute->begin(), _attribute->end());

	m_classifierBehavior  = obj.getClassifierBehavior();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> _collaborationRole = obj.getCollaborationRole();
	this->getCollaborationRole()->insert(this->getCollaborationRole()->end(), _collaborationRole->begin(), _collaborationRole->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> _feature = obj.getFeature();
	this->getFeature()->insert(this->getFeature()->end(), _feature->begin(), _feature->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _general = obj.getGeneral();
	this->getGeneral()->insert(this->getGeneral()->end(), _general->begin(), _general->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> _importedMember = obj.getImportedMember();
	this->getImportedMember()->insert(this->getImportedMember()->end(), _importedMember->begin(), _importedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _inheritedMember = obj.getInheritedMember();
	this->getInheritedMember()->insert(this->getInheritedMember()->end(), _inheritedMember->begin(), _inheritedMember->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member = obj.getMember();
	this->getMember()->insert(this->getMember()->end(), _member->begin(), _member->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember = obj.getOwnedMember();
	this->getOwnedMember()->insert(this->getOwnedMember()->end(), _ownedMember->begin(), _ownedMember->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_package  = obj.getPackage();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _part = obj.getPart();
	this->getPart()->insert(this->getPart()->end(), _part->begin(), _part->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::GeneralizationSet>>> _powertypeExtent = obj.getPowertypeExtent();
	this->getPowertypeExtent()->insert(this->getPowertypeExtent()->end(), _powertypeExtent->begin(), _powertypeExtent->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinedClassifier = obj.getRedefinedClassifier();
	this->getRedefinedClassifier()->insert(this->getRedefinedClassifier()->end(), _redefinedClassifier->begin(), _redefinedClassifier->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	m_representation  = obj.getRepresentation();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> _role = obj.getRole();
	this->getRole()->insert(this->getRole()->end(), _role->begin(), _role->end());

	m_templateParameter  = obj.getTemplateParameter();

	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> _useCase = obj.getUseCase();
	this->getUseCase()->insert(this->getUseCase()->end(), _useCase->begin(), _useCase->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<uml::CollaborationUse>>> _collaborationUseList = obj.getCollaborationUse();
	for(std::shared_ptr<uml::CollaborationUse> _collaborationUse : *_collaborationUseList)
	{
		this->getCollaborationUse()->push_back(std::shared_ptr<uml::CollaborationUse>(dynamic_cast<uml::CollaborationUse*>(_collaborationUse->copy())));
	}
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
	std::shared_ptr<std::vector<std::shared_ptr<uml::Generalization>>> _generalizationList = obj.getGeneralization();
	for(std::shared_ptr<uml::Generalization> _generalization : *_generalizationList)
	{
		this->getGeneralization()->push_back(std::shared_ptr<uml::Generalization>(dynamic_cast<uml::Generalization*>(_generalization->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterfaceRealization>>> _interfaceRealizationList = obj.getInterfaceRealization();
	for(std::shared_ptr<uml::InterfaceRealization> _interfaceRealization : *_interfaceRealizationList)
	{
		this->getInterfaceRealization()->push_back(std::shared_ptr<uml::InterfaceRealization>(dynamic_cast<uml::InterfaceRealization*>(_interfaceRealization->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _ownedAttributeList = obj.getOwnedAttribute();
	for(std::shared_ptr<uml::Property> _ownedAttribute : *_ownedAttributeList)
	{
		this->getOwnedAttribute()->push_back(std::shared_ptr<uml::Property>(dynamic_cast<uml::Property*>(_ownedAttribute->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Behavior>>> _ownedBehaviorList = obj.getOwnedBehavior();
	for(std::shared_ptr<uml::Behavior> _ownedBehavior : *_ownedBehaviorList)
	{
		this->getOwnedBehavior()->push_back(std::shared_ptr<uml::Behavior>(dynamic_cast<uml::Behavior*>(_ownedBehavior->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Connector>>> _ownedConnectorList = obj.getOwnedConnector();
	for(std::shared_ptr<uml::Connector> _ownedConnector : *_ownedConnectorList)
	{
		this->getOwnedConnector()->push_back(std::shared_ptr<uml::Connector>(dynamic_cast<uml::Connector*>(_ownedConnector->copy())));
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
	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> _ownedUseCaseList = obj.getOwnedUseCase();
	for(std::shared_ptr<uml::UseCase> _ownedUseCase : *_ownedUseCaseList)
	{
		this->getOwnedUseCase()->push_back(std::shared_ptr<uml::UseCase>(dynamic_cast<uml::UseCase*>(_ownedUseCase->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> _packageImportList = obj.getPackageImport();
	for(std::shared_ptr<uml::PackageImport> _packageImport : *_packageImportList)
	{
		this->getPackageImport()->push_back(std::shared_ptr<uml::PackageImport>(dynamic_cast<uml::PackageImport*>(_packageImport->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Substitution>>> _substitutionList = obj.getSubstitution();
	for(std::shared_ptr<uml::Substitution> _substitution : *_substitutionList)
	{
		this->getSubstitution()->push_back(std::shared_ptr<uml::Substitution>(dynamic_cast<uml::Substitution*>(_substitution->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateBinding>>> _templateBindingList = obj.getTemplateBinding();
	for(std::shared_ptr<uml::TemplateBinding> _templateBinding : *_templateBindingList)
	{
		this->getTemplateBinding()->push_back(std::shared_ptr<uml::TemplateBinding>(dynamic_cast<uml::TemplateBinding*>(_templateBinding->copy())));
	}
}

ecore::EObject *  CollaborationImpl::copy() const
{
	return new CollaborationImpl(*this);
}

std::shared_ptr<ecore::EClass> CollaborationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCollaboration();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> CollaborationImpl::getCollaborationRole() const
{

    return m_collaborationRole;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> CollaborationImpl::getAttribute() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> _attribute(new std::vector<std::shared_ptr<uml::Property>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_attribute->insert(_attribute->end(), ownedAttribute->begin(), ownedAttribute->end());

	return _attribute;
}
std::shared_ptr<uml::Element> CollaborationImpl::getOwner() const
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
std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> CollaborationImpl::getRole() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> _role(new std::vector<std::shared_ptr<uml::ConnectableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> collaborationRole = getCollaborationRole();
	_role->insert(_role->end(), collaborationRole->begin(), collaborationRole->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_role->insert(_role->end(), ownedAttribute->begin(), ownedAttribute->end());

	return _role;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> CollaborationImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> redefinedClassifier = getRedefinedClassifier();
	_redefinedElement->insert(_redefinedElement->end(), redefinedClassifier->begin(), redefinedClassifier->end());

	return _redefinedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> CollaborationImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::CollaborationUse>>> collaborationUse = getCollaborationUse();
	_ownedElement->insert(_ownedElement->end(), collaborationUse->begin(), collaborationUse->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> elementImport = getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Generalization>>> generalization = getGeneralization();
	_ownedElement->insert(_ownedElement->end(), generalization->begin(), generalization->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterfaceRealization>>> interfaceRealization = getInterfaceRealization();
	_ownedElement->insert(_ownedElement->end(), interfaceRealization->begin(), interfaceRealization->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_ownedElement->insert(_ownedElement->end(), ownedMember->begin(), ownedMember->end());
	_ownedElement->push_back(getOwnedTemplateSignature());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> packageImport = getPackageImport();
	_ownedElement->insert(_ownedElement->end(), packageImport->begin(), packageImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Substitution>>> substitution = getSubstitution();
	_ownedElement->insert(_ownedElement->end(), substitution->begin(), substitution->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateBinding>>> templateBinding = getTemplateBinding();
	_ownedElement->insert(_ownedElement->end(), templateBinding->begin(), templateBinding->end());

	return _ownedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> CollaborationImpl::getFeature() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> _feature(new std::vector<std::shared_ptr<uml::Feature>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> attribute = getAttribute();
	_feature->insert(_feature->end(), attribute->begin(), attribute->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Connector>>> ownedConnector = getOwnedConnector();
	_feature->insert(_feature->end(), ownedConnector->begin(), ownedConnector->end());

	return _feature;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> CollaborationImpl::getMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> feature = getFeature();
	_member->insert(_member->end(), feature->begin(), feature->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> importedMember = getImportedMember();
	_member->insert(_member->end(), importedMember->begin(), importedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> inheritedMember = getInheritedMember();
	_member->insert(_member->end(), inheritedMember->begin(), inheritedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_member->insert(_member->end(), ownedMember->begin(), ownedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> role = getRole();
	_member->insert(_member->end(), role->begin(), role->end());

	return _member;
}
std::shared_ptr<uml::Namespace> CollaborationImpl::getNamespace() const
{
	std::shared_ptr<uml::Namespace> _namespace = nullptr ;
	
	if(getPackage()!=nullptr)
	{
		_namespace = getPackage();
	}

	return _namespace;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> CollaborationImpl::getOwnedMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> ownedAttribute = getOwnedAttribute();
	_ownedMember->insert(_ownedMember->end(), ownedAttribute->begin(), ownedAttribute->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Behavior>>> ownedBehavior = getOwnedBehavior();
	_ownedMember->insert(_ownedMember->end(), ownedBehavior->begin(), ownedBehavior->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Connector>>> ownedConnector = getOwnedConnector();
	_ownedMember->insert(_ownedMember->end(), ownedConnector->begin(), ownedConnector->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> ownedRule = getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::UseCase>>> ownedUseCase = getOwnedUseCase();
	_ownedMember->insert(_ownedMember->end(), ownedUseCase->begin(), ownedUseCase->end());

	return _ownedMember;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CollaborationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //9125
		case UmlPackage::BEHAVIOREDCLASSIFIER_CLASSIFIERBEHAVIOR:
			return getClassifierBehavior(); //9138
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //914
		case UmlPackage::COLLABORATION_COLLABORATIONROLE:
			return getCollaborationRole(); //9145
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //9126
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //910
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //9111
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //9124
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //9127
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //9128
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //9114
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //9130
		case UmlPackage::BEHAVIOREDCLASSIFIER_INTERFACEREALIZATION:
			return getInterfaceRealization(); //9139
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //9131
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //9132
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //9110
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //9115
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //915
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //916
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //917
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDATTRIBUTE:
			return getOwnedAttribute(); //9138
		case UmlPackage::BEHAVIOREDCLASSIFIER_OWNEDBEHAVIOR:
			return getOwnedBehavior(); //9140
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //911
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDCONNECTOR:
			return getOwnedConnector(); //9139
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //912
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //9113
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //9110
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //915
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //9133
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //913
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //914
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //9112
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //9112
		case UmlPackage::STRUCTUREDCLASSIFIER_PART:
			return getPart(); //9140
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //9129
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //918
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //9135
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //9111
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //9112
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //9136
		case UmlPackage::STRUCTUREDCLASSIFIER_ROLE:
			return getRole(); //9141
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //9137
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //914
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //915
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //9134
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //919
	}
	return boost::any();
}
